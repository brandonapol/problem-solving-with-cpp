// Appends data to the end of file data.txt
#include <fstream>
#include <iostream>
#include <cstdlib>

int main() 
    {
    using namespace std;
    char in_file_name[16], out_file_name[16];
    ifstream in_stream;
    ofstream out_stream;

    cout << "Name of file to read:\n";
    cin >> in_file_name;
    cout << "Opening " << in_file_name << " for appending.\n";
    ofstream out_stream;
    out_stream.open(in_file_name, ios::app);
    if (out_stream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    out_stream << " Haw\n";

    out_stream.close();
    cout << "End of appending to file.\n";

    return 0;

}