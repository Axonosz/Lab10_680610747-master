#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ifstream fin("score.txt");

    double x, sum = 0.0, sumsq = 0.0;
    int n = 0;

    while (fin >> x) {
        sum += x;
        sumsq += x * x;
        n++;
    }

    fin.close();

    double mean = sum / n;
    double sd = sqrt((sumsq / n) - (mean * mean));

    cout << setprecision(3);
    cout << "Number of data = " << n << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
}
