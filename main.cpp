// Lauryn Clevenger
// Dr Tyson McMillan
// COSC 1437

#include <iostream>
using namespace std;

// A recursive function contains a call to itself

void factorialR(int num, int fromPeg, int toPeg, int tempPeg)
{
  if (num > 0)
  {
    factorialR(num - 1, fromPeg, tempPeg, toPeg);
    cout << "Move a disc from peg " << fromPeg << " to peg " << toPeg << endl;
    factorialR(num-1, tempPeg, toPeg, fromPeg);
  }
}

int main() 
{
  const int NUM_DISCS = 3;    // # of discs to Move
  const int FROM_PEG = 1;     // Initial "from" peg
  const int TO_PEG = 3;       // Initial "to" peg
  const int TEMP_PEG = 2;     // Initial "temp" peg

  // Play Game
  factorialR(NUM_DISCS, FROM_PEG, TO_PEG,  TEMP_PEG);
  cout << "All the pegs are moved\n";

  return 0;
}

// Not sure what was meant on factorial