#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

char pull(char pieces[]);

int main(){

  //Initializing Program
  char pieces[7] = {'O', 'I', 'S', 'Z', 'L', 'J','T'};
  char list1[7];
  char list2[7];
  char list3[7];
  char list4[7];
  char list5[7];
  char list6[7];
  char list7[7];
  char final;
  int count = 0;
  srand(time(NULL));

  while (count < 7){
    char piece1 = pull(pieces);
    //Checking to look for duplicates
    if (list1[count-1] != piece1 && list1[count-2] != piece1 && list1[count-3] != piece1 && list1[count-4] != piece1 && list1[count-5] != piece1 && list1[count-6] != piece1){
      list1[count] = piece1;
      count++;
    }
  }
  count = 0;
  while (count < 7){
    char piece2 = pull(pieces);
    if (list2[count-1] != piece2 && list2[count-2] != piece2 && list2[count-3] != piece2 && list2[count-4] != piece2 && list2[count-5] != piece2 && list2[count-6] != piece2){
      list2[count] = piece2;
      count++;
    }
  }
  count = 0;
  while (count < 7){
    char piece3 = pull(pieces);
    if (list3[count-1] != piece3 && list3[count-2] != piece3 && list3[count-3] != piece3 && list3[count-4] != piece3 && list3[count-5] != piece3 && list3[count-6] != piece3){
      list3[count] = piece3;
      count++;
    }
  }
  count = 0;
  while (count < 7){
    char piece4 = pull(pieces);
    if (list4[count-1] != piece4 && list4[count-2] != piece4 && list4[count-3] != piece4 && list4[count-4] != piece4 && list4[count-5] != piece4 && list4[count-6] != piece4){
      list4[count] = piece4;
      count++;
    }
  }
  count = 0;
  while (count < 7){
    char piece5 = pull(pieces);
    if (list5[count-1] != piece5 && list5[count-2] != piece5 && list5[count-3] != piece5 && list5[count-4] != piece5 && list5[count-5] != piece5 && list5[count-6] != piece5){
      list5[count] = piece5;
      count++;
    }
  }
  count = 0;
  while (count < 7){
    char piece6 = pull(pieces);
    if (list6[count-1] != piece6 && list6[count-2] != piece6 && list6[count-3] != piece6 && list6[count-4] != piece6 && list6[count-5] != piece6 && list6[count-6] != piece6){
      list6[count] = piece6;
      count++;
    }
  }
  count = 0;
  while (count < 7){
    char piece7 = pull(pieces);
    if (list7[count-1] != piece7 && list7[count-2] != piece7 && list7[count-3] != piece7 && list7[count-4] != piece7 && list7[count-5] != piece7 && list7[count-6] != piece7){
      list7[count] = piece7;
      count++;
    }
  }
  final = pull(pieces);
  for (int x=0; x <= 7; x++){
    cout << list1[x];
  }
  for (int x=0; x <= 7; x++){
    cout << list2[x];
  }
  for (int x=0; x <= 7; x++){
    cout << list3[x];
  }
  for (int x=0; x <= 7; x++){
    cout << list4[x];
  }
  for (int x=0; x <= 7; x++){
    cout << list5[x];
  }
  for (int x=0; x <= 7; x++){
    cout << list6[x];
  }
  for (int x=0; x <= 7; x++){
    cout << list7[x];
  }
  cout << final;
  cout << endl;
  }

//Pulling from the bag
char pull(char pieces[]){

  int pull = rand() % 7 + 0;
  return pieces[pull];
}
