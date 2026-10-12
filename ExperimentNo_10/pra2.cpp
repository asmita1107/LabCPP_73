#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ofstream fout("records.txt", ios::app);
   string record;

   cout << "Enter records (-1 to stop):" << endl;

   while (getline(cin, record)) {
     if (record == "-1")
       break;

     fout << record << endl;
   }

   fout.close();

   ifstream fin("records.txt");

   cout << "\nAll Records:" << endl;

   while (getline(fin, record)) {
     cout << record << endl;
   }

   fin.close();

   return 0;
}