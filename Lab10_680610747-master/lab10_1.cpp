#include<iostream>
using namespace std;

int main(){
    int count[5] = {}; // A B C D F
    char grade;
    int student = 1;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    while(true){
        cout << "Student [" << student << "]: ";
        cin >> grade;

        if(grade == '0'){
            break;
        }

        if(grade == 'A'){
            count[0]++;
            student++;
        }
        else if(grade == 'B'){
            count[1]++;
            student++;
        }
        else if(grade == 'C'){
            count[2]++;
            student++;
        }
        else if(grade == 'D'){
            count[3]++;
            student++;
        }
        else if(grade == 'F'){
            count[4]++;
            student++;
        }
        else{
            cout << "Wrong input. Please input again." << endl;
        }
    }

    cout << "In total " << student - 1 << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4];

    return 0;
}
