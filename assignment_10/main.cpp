#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <sstream>
#include <algorithm>

using namespace std;

struct Film {
    // Setting header data
    int year;
    int length;
    string title;
    string subject;
    string actor;
    string actress;
    string directory;
    int popularity;
    bool awards;
    string image;

    // Sort by popularity
    // See: https://stackoverflow.com/questions/1380463/sorting-a-vector-of-custom-objects
    bool operator < (const Film& film) const
    {
        return (popularity < film.popularity);
    }
};


// Use accumulate to sum the total length of all movies
void accumulate(vector<Film> films) {
    int totalLengthOfMovies = 0;
    for (auto f: films) {
        totalLengthOfMovies += f.length;
    }
    cout << "Sum the total length of all movies: " << totalLengthOfMovies << endl;
}

// Use sort to rank movies in descending order by popularity
void sortByPopularity(vector<Film> films) {
    sort(films.begin(), films.end());
    // todo: figure out how to write to another file
    for(auto f: films) {
        cout << f.popularity << endl;
    }
}

// Use find to the first occurrence of a value on any of the fields of your choosing
void find(vector<Film> films) {
    // find first occurence of any field
    // see ex: auto iterator = std::find_if(vector.begin(), vector.end(), lambda);
    // see: https://cplusplus.com/reference/algorithm/find_if/
    // see: https://www.geeksforgeeks.org/stdfind_first_of-in-cpp/
    vector<Film>::iterator f_film = find_if(films.begin(), films.end(), [](Film f){return f.title == "Octopussy";});
    cout << f_film->title << endl;
}

// Extract from the data two vectors, i.e. ‘Action’ and ‘Comedy’. Use
// unique to find the unique years these movies were released. Use
// equal to compare the two unique lists
void find_unique(vector<Film> films) {
    vector<int> actionYearList;
    vector<int> comedyYearList;
    for(auto f: films) {
        if (f.subject == "Action") actionYearList.push_back(f.year);
        if (f.subject == "Comedy") comedyYearList.push_back(f.year);
    }

    auto uniqueactionYearList = std::unique(actionYearList.begin(), actionYearList.end());
    auto uniquecomedyYearList = std::unique(comedyYearList.begin(), comedyYearList.end());

    actionYearList.resize(std::distance(actionYearList.begin(), uniqueactionYearList));

    // Broken for now. todo fix
    // cout << actionYearList << endl;
    // cout << comedyYearList << endl;
}

int main(){
    vector<Film> films;

    ifstream infile("film.txt"); // for example
    string line = "";

    // Skip first two line
    getline(infile, line);
    getline(infile, line);

    // While reading, do:
    // * accumulate()
    // * sortByPopularity()
    // * find()
    while (getline(infile, line)){
        Film film;

        stringstream strstr(line);
        string word = "";

        // This is terrible
        // is there a better way to do this? Creating a object from a line from a csv file
        getline(strstr, word, ';');
        film.year = (word != "")  ? stoi(word) : 0;

        getline(strstr, word, ';');
        film.length = (word != "") ? stoi(word) : 0;

        getline(strstr, word, ';');
        film.title = word;

        getline(strstr, word, ';');
        film.subject = word;

        getline(strstr, word, ';');
        film.actor = word;

        getline(strstr, word, ';');
        film.actress = word;

        getline(strstr, word, ';');
        film.directory = word;

        getline(strstr, word, ';');
        film.popularity = (word != "") ? stoi(word) : 0;

        getline(strstr, word, ';');
        film.awards = (word == "Yes");

        getline(strstr, word, ';');
        film.image = word;

        films.push_back(film);
    }

    // total hours of all movies
    accumulate(films);

    // sort by popularity
    sortByPopularity(films);

    // find first occurence
    find(films);

    // find unique year
    find_unique(films);

    return 0;
}
