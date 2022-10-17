#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int values_sum[2];
    vector<int> array;
    int nums;
    int n=0;
    int l;
    ifstream inFile;
    inFile.open("input.txt");
    // open the file to capture the dimensions of the matrix to put it in the array
    if (inFile.is_open())
    {
        for (int i = 0; i < 2; i++) // the dimensions of the dataset is on the top of the file
        {
            inFile >> values_sum[i]; // get the dimensions for the array file
        }

        inFile.close();
    }
    else {
        cerr << "Can't open the file!" << endl;
    }

    inFile.open("input.txt");

    if (inFile.is_open()){
        while(true){
            while (n < 2){
                inFile >> l;
                n++;
            }
            inFile >> nums;
            array.push_back(nums);
            if(inFile.eof()){
                break;
            }
        }



    }

    for (int i=0; i<array.size();i++){
        cout << array[i] << " ";
    }

    int temp;

    for (int i=0;i<array.size();i++){
        for (int j=0;j<array.size()-i;j++){
            if(array[i]+array[j]==values_sum[0] || array[i]+array[j]==values_sum[1]){
                cout << "Yes" << endl;
                cout << "Value 1: " << array[i] << " Value 2: " << array[j] << endl;
            }
            if(j == array.size()-1){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }




    }








    return 0;
}

