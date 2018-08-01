//Find S algorithm
//Shakeel Mohamed

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
#include <cmath>
#include <cstring>

using namespace std;

void printHypothesis(string* arr, int k){
   cout << "h" << k << " = <";
   for (int i = 0; i < 6; ++i){
      cout << arr[i] << " ";
   }
   cout << ">\n\n";
}

//Main
int main (int argc, char *argv[]) {

   cout << "Find S algorithm for concept EnjoySport\n" << endl;

   //Vector of training data
   vector<string*> trainingData = vector<string*>();
   
   //Specify training examples
   string data1[7] = {"Sunny", "Warm", "Normal", "Strong", "Warm", "Same", "Yes"};   
   string data2[7] = {"Sunny", "Warm", "High", "Strong", "Warm", "Same", "Yes"};
   string data3[7] = {"Rainy", "Cold", "High", "Strong", "Warm", "Change", "No"};
   string data4[7] = {"Sunny", "Warm", "High", "Strong", "Cool", "Change", "Yes"};
   string data5[7] = {"Sunny", "Warm", "High", "Weak", "Cool", "Change", "Yes"};
   trainingData.push_back(data1);
   trainingData.push_back(data2);
   trainingData.push_back(data3);
   trainingData.push_back(data4);
   trainingData.push_back(data5);
   
   string hypothesisStart[6] = {"0", "0", "0", "0", "0", "0"};
   printHypothesis(hypothesisStart, 0);
   string hypothesis[6] = {"Sunny", "Warm", "Normal", "Strong", "Warm", "Same"};
   //memcpy(hypothesis, trainingData[0], sizeof(hypothesis));
   //Iterate over training data
   for (int i = 0; i < trainingData.size(); ++i){
      //Check if positive example
      if (trainingData[i][6] == "Yes"){
         cout << "Positive training example: " << (i+1) << endl;
           
         //Iterate over training data values
         for (int j = 0; j < 6; ++j){
            
            if (hypothesis[j] == trainingData[i][j]){
               //Do nothing
            } else {
               hypothesis[j] = "?";
            }
           
         }
         printHypothesis(hypothesis, (i+1));
      }
      
   }
   
   cout << "End of program" << endl;
   return 0;

}



