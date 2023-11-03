#include <iostream>
#include <vector>

using namespace std;

void merge_sort(vector <int> print_arr, vector<int> left, vector<int> middle, vector<int> right)
{
	vector <int> temp (print_arr.size());

	int left_index = 0;
	int middle_index = 0;
	int right_index = 0;
	int total_num = 0;

	while ((left_index < left.size()) && (middle_index < middle.size()) && (right_index < right.size()))
    {
		if ((left[left_index] < middle[middle_index]) && (left[left_index] < right[right_index]))
        {
			temp[total_num++] = left[left_index++];
		}
		else if ((middle[middle_index] < left[left_index]) && (middle[middle_index] < right[right_index]))
        {
			temp[total_num++] = middle[middle_index++];
		}
		else
		{
			temp[total_num++] = right[right_index++];
		}
	}

	while ((left_index < left.size()) && (middle_index < middle.size()))
    {
		if ( left[left_index] < middle[middle_index])
		{
			temp[total_num++] = left[left_index++];
		}
		else
		{
			temp[total_num++] = middle[middle_index++];
		}
	}

	while ((left_index < left.size()) && (right_index < right.size()))
    {
		if ( left[left_index] < right[right_index])
		{
			temp[total_num++] = left[left_index++];
		}
        else
        {
			temp[total_num++] = right[right_index++];
		}
	}

	while ((middle_index < middle.size()) && (right_index < right.size()))
    {
		if ( middle[middle_index] < right[right_index])
		{
			temp[total_num++] = middle[middle_index++];
		}
        else
		{
			temp[total_num++] = right[right_index++];
		}
	}

	while (left_index < left.size() )
    {
		temp[total_num++] = left[left_index++];
	}

	while (middle_index < middle.size() )
    {
		temp[total_num++] = middle[middle_index++];
	}

	while (right_index < right.size() )
    {
		temp[total_num++] = right[right_index++];
	}

	print_arr.clear();
	print_arr = temp;

}

vector <int> merge_sort_vec(vector<int>& ve)
{

	if (ve.size() == 1)
    {
		return ve;
	}
	else if ( ve.size() == 2)
    {

		vector <int> vector1;
		vector1[0] = ve[0];

		vector<int> vector2;
		vector2[0] = ve[1];

		vector<int> middle (0);
		merge_sort(ve, vector1, middle, vector2);

		return ve;
	}

	int vector_size = ve.size();
	int left_arr_size;
	int middle_arr_size;
	int right_arr_size;

	if (vector_size > 2)
    {
		if ( vector_size % 3 == 0)
		{
			left_arr_size = vector_size/3;
			middle_arr_size = vector_size/3;
			right_arr_size = vector_size/3;
		}
        else if ( vector_size %3 == 1)
        {
			left_arr_size = (vector_size/3) + 1;
			middle_arr_size = vector_size/3;
			right_arr_size = vector_size/3;
		}
		else
        {
			left_arr_size = (vector_size/3) + 1;
			middle_arr_size = vector_size/3;
			right_arr_size = (vector_size/3) + 1;
		}
	}

	vector<int> l;
	vector<int> m;
	vector<int> r;

	for( int i =0; i<left_arr_size; i++)
    {
		cout <<i <<endl;
		cout << ve[i] <<endl;
		l.push_back(ve[i]);
	}

	for(int i = 0; i<(middle_arr_size); i++)
    {
		m.push_back(ve[i+left_arr_size]);
	}

	for (int i=0; i<right_arr_size; i++)
    {
		cout<<i<<endl;
		r.push_back(ve[i+(middle_arr_size+left_arr_size)]);
	}

	merge_sort_vec(l);
	merge_sort_vec(m);
	merge_sort_vec(r);

	merge_sort(ve, l, m, r);

	return ve;
}

int main(void)
{
	vector <int> check_el = {45, -10, -5, -2, 20, 65, 70};

	vector<int> print_arr;
	print_arr = merge_sort_vec(check_el);

	for (int i=0; i <print_arr.size(); i++)
    {
		cout <<print_arr[i] <<endl;
	}
}
