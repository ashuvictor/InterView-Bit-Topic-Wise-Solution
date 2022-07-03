

Given an array of integers A of size N and an integer B.

College library has N bags,the ith book has A[i] number of pages.

You have to allocate books to B number of students so that maximum number of pages alloted to a student is minimum.

A book will be allocated to exactly one student.
Each student has to be allocated at least one book.
Allotment should be in contiguous order, for example: A student cannot be allocated book 1 and book 3, skipping book 2.
Calculate and return that minimum possible number.

NOTE: Return -1 if a valid assignment is not possible.




Input Format

The first argument given is the integer array A.
The second argument given is the integer B.
Output Format

Return that minimum possible number
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^5
For Example

Input 1:
    A = [12, 34, 67, 90]
    B = 2
Output 1:
    113
Explanation 1:
    There are 2 number of students. Books can be distributed in following fashion : 
        1) [12] and [34, 67, 90]
        Max number of pages is allocated to student 2 with 34 + 67 + 90 = 191 pages
        2) [12, 34] and [67, 90]
        Max number of pages is allocated to student 2 with 67 + 90 = 157 pages 
        3) [12, 34, 67] and [90]
        Max number of pages is allocated to student 1 with 12 + 34 + 67 = 113 pages

        Of the 3 cases, Option 3 has the minimum pages = 113.

Input 2:
    A = [5, 17, 100, 11]
    B = 4
Output 2:
    100

bool isPossible(vector<int> &pages,int n,int m,int mid)
{
 int cur_sum = 0;
 int cnt = 1;
 for(int i=0;i<pages.size();i++)
 {
  cur_sum += pages[i];
  if(cur_sum<=mid)
  {
   continue;
  }
  else
  {
   cnt++;
   cur_sum = pages[i];
   if(cur_sum>mid)
   {
       return false;
   }
  }
 }
 if(cnt>m)
 {
  return false;
 }
 else
 {
  return true;
 }
}

int getAns(int n,int m,vector<int> &pages)
{
    if(pages.size()<m)
    return -1;
 int beg = 0;
 int end = 1000000007;
 int pivot = -1;
 while(beg<=end)
 {
  int mid = beg+(end-beg)/2;
  if(isPossible(pages,n,m,mid))
  {
   pivot = mid;
   end = mid-1;
  }
  else
  {
   beg = mid+1;
  }
 }
 return pivot;
}

int Solution::books(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return getAns(A.size(),B,A);
}