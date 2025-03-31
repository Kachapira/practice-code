//program plays with fstream mechanic
#include <iostream>
#include <fstream>
using namespace std;
//remember, this is the main function
int main(){
    char data[100];
    //opens file in write mode
    ofstream outfile;
    outfile.open("Afile.txt");
    
    cout << "Writing to the file" << endl;
    cout << "Write your name: ";
    cin.getline(data,100);

    //write inputted data into the text file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin.ignore();

    //again write inputted data into thext file
    outfile << data << endl;

    //close outfile
    outfile.close();

    //open text file in read mode (now we use ofstream)
    ifstream infile;
    infile.open("Afile.txt");
    
    //reading from the file
    infile >> data;

    //write data on the sccreen
    cout << data << endl;

    //again read data from the file and dispaly it
    infile >> data;
    cout << data << endl;

    //now we close the opened file
    infile.close();
    return 0;
}
/*Apparently, the age input is ignored entirely
Thus when program reafs file again(line 39), 
the same value is stored on the text file
Remember to commit this program under git lab examples repository*/
