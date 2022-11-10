class Sample
{
    private:
        int x;
        double y;
        public :
            Sample(){
                x = 0;
                y = 0;
            }
            Sample(int _x) {
                x = _x;
            }
            Sample(int _x, int _y) {
                // do we need double cast for y?
                x = _x;
                y = _y;
            }
            Sample(int _x, double _y) {
                x = _x;
                y = _y;
            }

            int getX() {
                return x;
            }

            double getY() {
                return y;
            }
};
