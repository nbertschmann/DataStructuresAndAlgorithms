#include<iostream>
#include<vector>
#include<string>

/**
 * @brief Compresses a vector of characters by replacing consecutive repeated characters with the character followed by its count.
 * 
 * @param chars The vector of characters to be compressed.
 * @return The length of the compressed vector.
 */
int compress(std::vector<char>& chars) {
    
	int count=1;
    std::string ans;
	
    for(int i=0;i<chars.size();i++)
    {
        // Check for consecutive repeated characters
        while(i<chars.size()-1 && chars[i+1] == chars[i])
        {
            count++;
            i++;
        }
        
        // Append character to the compressed string
        ans += chars[i];
        
        // If count is greater than 1, append the count to the compressed string
        if(count == 1)
        {
            continue;
        }
        ans += std::to_string(count);
        count = 1;
    }
    
    chars.clear();
    
    // Populate the vector with the compressed string characters
    for(int i=0;i<ans.size();i++)
    {
        chars.push_back(ans[i]);
    } 
 
    return chars.size();
}

int main()
{
    // std::vector<char> input = {'a','a','b','b','c','c','c'};
    std::vector<char> input = {'a','b','b','b','b'};
    int result = compress(input);
}