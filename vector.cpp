#include <bits/stdc++.>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // declaring and initialising vectors 
    
    // create empty vector 
    vector <int> v1; 
    // create vector of size 5 initialised with 0 {0,0,0,0,0}
    vector <int> v2(5);
    // create vector of size 5 initialised with 10 {10,10,10,10,10}
    vector <int> v3(5,10);
    // create and initialise vector manually 
    vector <int> v4 = {1,2,3,4,5,6,7};
    // copy vector v4 in new vector v5
    vector  <int> v5(v4); 
    vector <int> v10 = v5;
    // vectors with other datatypes 
    vector <string> v6 = {"hello","world"};
    // vector of pair 
    vector <pair<int,string>> vp = {{1,"one"},{2,"two"}};
    // vector of vectors
    vector <vector<int>> matrix = {{1,2},{3,4},{5,6}};
    // vector of structs 
    // define the struct
    struct student{
        string name;
        int age;
    }
    // create the vector
    vector <student> studentDetails = {{"madhav",20},{"vipul",20}};
    // declaring and intitalising multiple vectors 
    vector <int> a = {1,2},b = {3,4};
    
    //vector functions and operations 
    
    vector <int> vec = {1,2,3};
    
    //insert at end 
    vec.push_back(4); // returns void 
    vec.emplace_back(5); //faster than push back.
    
    // remove last element
    vec.pop_back(); // return void 
    
    // access front and back element 
    vec.front();
    vec.back();
    
    // size of the vector 
    vec.size(); // returns the number of element inside vector
    vec.capacity();
    
    // insert at specific position
    // vec.insert(position, value);
    vec.insert(vec.begin()+3,100); // returns iterator pointing to inserted element.
    
    // erasing element or range from vector 
    // vec.erase(position);
    vec.erase(vec.begin()+3);
    // vec.erase(from,to);
    vec.erase(vec.begin(),vec.begin()+3); // removes first three [0,3)
    
    //clearing a vector 
    vec.clear();
    
    //check if vector is empty 
    vec.empty(); // returns 1 if empty, 0 otherwise
    
    // sum of elements in a vector
    // vec.accumulate(vec.begin(),vec.end(),intial value of sum variable);
    int sum = vec.accumulate(vec.begin(),vec.end(),0); // 0 + 1 + 2 + 3 + 4 = 10
    sum = vec.accumulate(vec.begin(),vec.end(),10); // 10 + 1 + 2 + 3 + 4 = 20
    // returns the sum of all element in int, float, double same as datatype of vector
    
    // reverse a vector 
    reverse(vec.begin(),vec.end());
    
    // find max & min element in the vector 
    // returns iterator pointing to max / min element 
    auto it1 = max_element(vec.begin(),vec.end());
    auto it2 = min_element(vec.begin(),vec.end());
    int maxValue = *it1;
    int minValue = *it2;
    
    // or 
    
    maxValue = *(max_element(vec.begin(),vec.end()));
    minValue = *(min_element(vec.begin(),vec.end()));
    
    // performing search on vector 
    // return iterator pointing to the target element if found
    // otherwise returns iterator pointing to vec.end()
    auto it = find(vec.begin(),vec.end(),10);
    // searches for target element 10 in the whole vector 
    
    // declaring and initialising iterators to store iterators 
    
    vector <int> iterator it;
    // or 
    auto it = vec.max_element(vec.begin(),vec.end());
    
    // dereferencing the values at iterator 
    int value = *it;
    
    // iterating over vectors 
    
    // using index 
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " " ;
    }
    
    //using for each loop 
    for(int i : vec){
        cout << i << endl;
    }
    
    //using iterators 
    for(auto it=vec.begin();it!=vec.end();it++){
        cout << *it << " ";
    }
    
    //reverse iteration 
    for(auto it=vec.rbegin();it!=vec.rend(),++it){
        cout << *it << endl;
    }
    
    // sorting vector in ascending order
    sort(vec.begin(),vec.end());
    // sorting vector in descending order
    sort(vec.rbegin(),vec.rend());
    // reverse 
    reverse(vec.begin(),vec.end());
    // sorting vector in descending order using comparator 
    sort(vec.begin(),vec.end(),greater <int> () );
    
    // performing searches on vectors
    vector <int> vex = {1,2,3,4,5,6,7};
    int key = 7;
    auto it = find(vex.begin(),vex.end(),key);
    // index at which key found = it - vec.begin();
    int index = it - vex.begin();
    cout << index << endl;
    
    //elegant way 
    bool found = find(vex.begin(),vex.end(),key) != vex.end();
    if(found == 1){
        cout << "target found" << endl;
    }else{
        cout << "target not found" << endl;
    }
    
    // binary search on vector
    // vector must be sorted 
    sort(vex.begin(),vex.end());
    binary_search(vex.begin(),vex.end(),key); //returns 1 if target found, 0 otherwise 
    bool found2 = binary_search(vex.begin(),vex.end(),key);
    
    // lower and upper bound 
    // to use lower and upper bound the vector must be sorted in an non decreasing order
    
    // lower_bound(start_iterator, end_iterator, key);
    // upper_bound(start_iterator, end_iterator, key);
    
    // lower bound returns an iterator pointing towards the first element which is >= key
    // upper bound returns an iterator pointing towards the first element > value 
    
    // finding count occurance of an element in a vector 
    int count1 = upper_bound(vex.begin(),vex.end(),5) - lower_bound(vex.begin(),vex.end(),5);
    
    // lower bound gives the index of the 1st occurance of 5 
    // upper bound gives the index after last occurance of 5
    // the difference gives the total number of times 5 occurs in the element. 
    
    vector <int> myVec = {1,2,3,4,5,6,7,2,2,4,5,6,2,3,5,6,2,6,4,6,7,8,5};
    sort(myVec.begin(),myVec.end());
    int value3 = 2;
    int count = upper_bound(myVec.begin(),myVec.end(),value3) - lower_bound(myVec.begin(),myVec.end(),value3);
    cout << count << endl;
    
    // thats it for now
}
