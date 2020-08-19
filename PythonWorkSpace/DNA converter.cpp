#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
std::string DNAStrand(const std::string& dna)
{
  char* newdna = new char[dna.size()+1];
  for(int i=0; i<dna.size(); i++)
  {
    if(dna[i]=='A')
    newdna[i]=(char)84;
    else if (dna[i]=='T')
    newdna[i]=(char)65;
    else if (dna[i]=='G')
    newdna[i]=(char)67;
    else if (dna[i]=='C')
    newdna[i]=(char)71;
  }
  string answer;
  answer.copy(newdna, dna.size());
  cout << answer << endl;
  return answer;
}

int main()
{
    string dna = "TTCC";
cout << DNAStrand(dna);

}
