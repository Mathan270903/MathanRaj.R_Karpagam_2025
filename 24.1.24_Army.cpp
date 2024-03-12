// Luke is daydreaming in Math class. He has a sheet of graph paper with  rows and  columns, and he imagines that there is an army base in each cell for a total of  bases. He wants to drop supplies at strategic points on the sheet, marking each drop point with a red dot. If a base contains at least one package inside or on top of its border fence, then it's considered to be supplied. For example:

// image

// Given  and , what's the minimum number of packages that Luke must drop to supply all of his bases?

// Example


// Packages can be dropped at the corner between cells (0, 0), (0, 1), (1, 0) and (1, 1) to supply  bases. Another package can be dropped at a border between (0, 2) and (1, 2). This supplies all bases using  packages.

// Function Description

// Complete the gameWithCells function in the editor below.

// gameWithCells has the following parameters:

// int n: the number of rows in the game
// int m: the number of columns in the game
// Returns

// int: the minimum number of packages required
// Input Format

// Two space-separated integers describing the respective values of  and .

// Constraints


// Sample Input 0

// 2 2
// Sample Output 0

// 1
// Explanation 0

// Luke has four bases in a  grid. If he drops a single package where the walls of all four bases intersect, then those four cells can access the package:




// Solution



// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'gameWithCells' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts following parameters:
//  *  1. INTEGER n
//  *  2. INTEGER m
//  */

// int gameWithCells(int n, int m) {
    
//     int ans=0;
//     int n1=n/2,m1=m/2;
//     ans = n1*m1;
//     int rem_n,rem_m;
//     rem_n  = n-n1*2;
//     rem_m = m-m1*2;

//     if(rem_n==0 && rem_m==0) 
//     {
//         ans=ans;
//     }
//     else if(rem_n==1 && rem_m==0) 
//     {
//         ans+= m/2;
//     }
//     else if(rem_n==0 && rem_m==1) 
//     {
//         ans+= n/2;
//     }
//     else 
//     {
//         ans+=n/2+m/2+1;
//     }
//     return ans;

// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string first_multiple_input_temp;
//     getline(cin, first_multiple_input_temp);

//     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

//     int n = stoi(first_multiple_input[0]);

//     int m = stoi(first_multiple_input[1]);

//     int result = gameWithCells(n, m);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }
