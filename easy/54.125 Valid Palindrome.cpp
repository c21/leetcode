/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.
*/

class Solution 
{

	public:

    	bool isPalindrome(string s) 
	{
		if(s == "")
			return true;

		string s1 = "";
		for(int i = 0; i < s.length(); i++)
		{
			if( (s[i] >= 'A' && s[i] <= 'Z'))
				s1 += s[i]-'A'+'a';
			else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
				s1 += s[i];	
		}	
		if(s1 == "")
			return true;
		else
		{
			string s2 = s1;
			reverse(s1.begin(), s1.end());
			return s1 == s2;
		}
    	}

};

/*
  模拟
*/
