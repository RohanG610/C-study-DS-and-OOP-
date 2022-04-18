#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool fileExists(string fname)
{
    ifstream fin;
    fin.open(fname,ios::in);
    if(fin)
    {
        fin.close();
        return (true);
    }
    return (false);
}
unsigned long long fileSize(string fname)
{
    ifstream fin;
    fin.open(fname,ios::binary);
    fin.seekg(0,ios::end);
    return fin.tellg();
}
int main()
{
    ofstream fout;
    string line;
    fout.open("Sample2.txt",ios::out);
    while(fout)
    {
        getline(cin,line);
        if(line=="-1")
            break;
        fout<<line<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("Sample2.txt",ios::in);
    while(fin)
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
    //Taking name of file and checking if it exists or not
    string fileName;
    getline(cin,fileName);
    if(fileExists(fileName))
    {
        cout<<"File exists"<<endl;
    }
    else
    {
        cout<<"File doesn't exist"<<endl;
    }
    //renaming name of file
    cout<<"Renaming Sample2 to Sample3"<<endl;
    char CfileName[] = "Sample3.txt";
    rename("Sample2.txt",CfileName);
    //Getting size of file in bytes
    cout<<"File Sample3.txt has Size of "<<fileSize(CfileName)<<" bytes"<<endl;
    //removing the file
    cout<<"Removing the Sample3.txt file"<<endl;
    remove(CfileName); 
}
