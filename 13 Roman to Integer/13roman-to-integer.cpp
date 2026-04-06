class Solution {
public:
   int romanToInt(string s){
    int number = 0;
    unordered_map<char, int> hashmap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    for (int i = 0; i < s.length(); i++)
    {
        if(i+1<s.length()&& hashmap[s[i]]<hashmap[s[i+1]])
            number -= hashmap[s[i]];
        else 
            number += hashmap[s[i]];
    }
    return number;
}
};