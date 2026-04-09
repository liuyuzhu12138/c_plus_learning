//equal.cpp -- equality vs assignment
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    vector<int> quizscores { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };
    cout << "Doing it right:" << endl;
    for (int i = 0; quizscores[i] == 20; i++)
        cout << "quiz" << i << " is a 20" << endl;
//Warning: you may prefer reading about this program
//to actually running it.
 cout << "Doing it dangerously wrong:" << endl;
 //for (int i = 0; quizscores[i] = 20; i++)
 //    cout << "quiz" << i << " is a 20" << endl;
    return 0;
}