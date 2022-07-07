// Appends data to the end of file data.txt
#include <fstream>
#include <iostream>

int main() 
    {
    using namespace std;

    cout << "Opening data.txt for appending.\n";
    ofstream fout;
    fout.open("data.txt", ios::app);
    if (fout.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    fout << " Haw\n";

    fout.close();
    cout << "End of appending to file.\n";

    return 0;

}