#include<iostream>
#include<fstream>
#include<math.h>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;

//defining a class
class Points{
public:
  string co_ordinate;
    double x=0,y=0;
    float dist=0.00;

 // Constructor to set field values
    Points(string str){
       co_ordinate=str;
        string word = "";
                // using space separator to extract each axis points and calc the distance
                    for (char z : str)
                {
                    if (z ==',')
                    {
                       // cout << word << endl;

                       x=stod(word);
                        word = "";
                    }
                    else {
                        word = word + z;
                    }
                }
                    y=stod(word);

                    // calc the distance from origin using pythagoras theorum
            dist=pow((pow(x,2)+pow(y,2)),0.5);

            };
     void display(){
        cout<<"data inserted successfully"<<" "<<co_ordinate<<endl;
    };
};


    //comparing the distance of two Points Object
    bool comparedist(const Points& p1,const Points& p2){
    return (p1.dist<p2.dist);
    };


    int main(){

   // Points points;
     ifstream myFile;
    cout<<"Enter File name : ";
    string file;
    cin>>file;
    myFile.open(file);//point.txt
    vector <Points> arr;
    if(myFile.is_open()){
            string tp;
             while(getline(myFile,tp)){ //read data from file object and put it into string.
            arr.push_back(Points(tp)); //assigning the values into Array of Object
            }
            myFile.close();
        }else{
            cout<<"File not found";
        }
   cout<< "before sorting";
      for(Points p : arr){
        p.display();
        cout<<endl<<p.dist<<endl;
      }
        //using Sort function to sort the Object on basis of Object_dist
        sort(arr.begin(),arr.end(),&comparedist);

//   applying bubble sort
//  for(int i=0;i<6;i++){
//    	for(int j=i+1;j<6;j++)
//		{
//			if(arr[i].dist>arr[j].dist)
//			{
//				Points temp  =arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//
//  }

             //open file for writing
             string ofpath;
             cout<<"Enter the path to Write on file";
             cin>>ofpath;
            ofstream fw(ofpath,ofstream::out);
            //check if file was successfully opened for writing
            if (fw.is_open())
            {
                   fw<< "After sorting"<<endl;

              //store array contents to text file
              for(Points p : arr){

            fw<<p.co_ordinate<<" "<<"distance from origin: "<<p.dist<<endl;
          }

              fw.close();
            }
            else cout << "Problem with opening file";


    return 0;
}




