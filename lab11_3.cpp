#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

int main (){
    ifstream score("score.txt");
    int i = 0;
    double sum = 0,sump = 0, mean = 0, sd = 0;
    string text;
    while (getline (score,text)) {
        sum += atof(text.c_str());
        sump += pow(atof(text.c_str()),2);
        i++;
    }
    mean = sum/i;
    sd = sqrt((sump/i) - pow(mean,2));
    cout << "Number of data = " << i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";
}