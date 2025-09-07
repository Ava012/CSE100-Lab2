#include <iostream>
using namespace std;

int main() {
  // Complete the code the below where indicated '/*Code Here*/'.
  // DO NOT CHANGE THE VARIABLE NAMES
  int breadth = 7;
  int length = 11;
  int area = length * breadth;

  float height = 3.5;
  float volume = length * breadth * height;

  // Calculate the surface area of the cuboid using single line of code
  float surface_area =
      2 * (length * breadth + breadth * height + height * length);
  // Do not change the below code
  cout << "The area is:" << area << endl;
  cout << "The volume is:" << volume << endl;
  cout << "The surface_area is:" << surface_area;
  return 0;
}