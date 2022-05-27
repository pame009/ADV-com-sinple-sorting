#include <iostream>
#include <string.h>
using namespace std;
#include "sorting.h"

#include <algorithm>
#include <chrono>
#include<vector>
#include <chrono>
using namespace std::chrono;
// these for test the runtime

//To run: ./main "type of sorting" __ __ __ __
//Ex: ./main bubble 123 56 513 1 23
//./main insert 123 56 513 1 23
//./main select 123 56 513 1 23

int main(int argc, char **argv) {
  //int g[10]={8,2,5,222,3,2,6,7,3,1};
  /* change to get number from argv*/
auto start = high_resolution_clock::now();

  int b[argc-2];
  for (int i=0; i<argc-2; i++){
    b[i] = atoi(argv[i+2]);
  }
  
  //for (int i=0; i<argc; ++i){
  //  cout<< argv[i] << "\n";
  //}
  //for (int i=0; i<argc-2; ++i){
  //  cout<< b[i] << "\n";
  //}
  //for (int i=0; i<10; ++i){
  //  cout<< g[i] << "\n";
  //}

  if (strcmp(argv[1], "bubble")==0){
    bubbleSort(b, argc-2);
  }else if (strcmp(argv[1], "insert")==0){
    insertionSort(b, argc-2);
  }else if (strcmp(argv[1], "select")==0){
    selectionSort(b, argc-2);
  }
auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
   cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
}
