#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

//REMEMBER COMPLEXITY

 // UNORDERED MAP O(I)
 // ORDERED MAP / MAP O(LOG N)
  
int main()
{
 // <int , int> key and value
// key ke according value


    // creation
    unordered_map<string , int> m;

    //insertion
    //  first way
    pair<string  , int > p = make_pair("anshuman" , 25);
    m.insert(p);

    //second way
    pair<string , int > pair2("patidar " , 57);
    m.insert(pair2);

    // third way
    m["mera"] = 1;

    // what will happen
    // on declaring and entry in first time it will make a new entey in map but if you enter it a second time will the same key 
    // it will update the previous data respect to the key instead of making a new entry with the same key
    // that means no duplicacy
    m["mera"] = 2 ; 

    // so the above line will updata the "mera" entry in map



  // SEARCHING

  // KEY AND IMP CONCEPT
    
    cout << m["mera"] << endl;
    cout << m.at("mera")<< endl;
    // the above lines will search the value according to the enteried key value

  //BUT
   

    // cout<< m.at("unknownKeyValue") << endl;
    // this will show error as "unknownKeyValue" is not in the map

   cout << m["unknownKeyValue"] << endl;// this will make a new entry in the map with key "unknownKeyValue" and value = 0

   //so if you write m[keyValue] first
   // then m.at(keyValue) later 
   // then "m.at()"  will give 0 as the m[] has created a entry for that key value

    

 //SIZE

   cout << m.size() << endl;   


// TO CHECK PRESENCE OF THE KEY


    // this will return 0 is case "not found" and 1 in case of "found"
  cout << m.count("anshuman") << endl;


// ERASE

   // remove a entry
   cout << m.size() << endl;
   m.erase("anshuman");
   cout << m.size() << endl;


// ITERATOR

 
  unordered_map<string , int> :: iterator it = m.begin();

  while(it != m.end())
  {
    cout << it -> first << " " << it -> second << endl;
    it++;
  }

    return 0;
}