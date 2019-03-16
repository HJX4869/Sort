#include <iostream>
#include <vector>

using namespace std;

////Heap_Sort
//void adjust_sort(vector<int>& m, int node, int size)
//{
//	int left = 2 * node + 1;
//	int right = 2 * node + 2;
//	int max = node;
//	if (left < size&&m[max] < m[left])
//	{
//		max = left;
//	}
//	if (right < size&&m[max] < m[right])
//	{
//		max = right;
//	}
//	if (max != node)
//	{
//		int change = m[max];
//		m[max] = m[node];
//		m[node] = change;
//		adjust_sort(m, max, size);
//	}
//}

////Merge_Sort
//void mergeAdd(vector<int>& m, int left, int mid, int right, int *temp)
//{
//	if (left < right)
//	{
//		int i = left;
//		int j = mid + 1;
//		int k = left;
//		while (i <= mid&&j <= right)
//		{
//			if (m[i] < m[j])
//			{
//				temp[k++] = m[i++];
//			}
//			else
//			{
//				temp[k++] = m[j++];
//			}
//		}
//		while (i <= mid)
//		{
//			temp[k++] = m[i++];
//		}
//		while (j <= right)
//		{
//			temp[k++] = m[j++];
//		}
//		for (int a = left; a <= right; a++)
//		{
//			m[a] = temp[a];
//		}
//	}
//}
//void mergeSort(vector<int>& m, int left, int right, int *temp)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		mergeSort(m, left, mid, temp);
//		mergeSort(m, mid + 1, right, temp);
//		mergeAdd(m, left, mid, right, temp);
//	}
//}

//Quick_Sort
void quickSort(vector<int>& m, int left, int right)
{
	if (left < right)
	{
		int i = left;
		int j = right;
		int temp = m[i];
		while (i < j)
		{
			while (i < j&&m[j] >= temp)
			{
				j--;
			}
			m[i] = m[j];
			while (i < j&&m[i] <= temp)
			{
				i++;
			}
			m[j] = m[i];
		}
		m[i] = temp;
		int pivort = i;
		quickSort(m, left, pivort - 1);
		quickSort(m, pivort + 1, right);
	}
}
int main()
{
	vector<int> arr = { 2, 1, 2, 0, -4, 5, 41, 5, 5, 4, 8, 9, 32, 4, 5, 5, 445, 4 };
	decltype(arr.size()) num = arr.size();

	////Bubble_Sort
	//for (size_t i = 1; i < num; i++)
	//{
	//	bool isOrnot = true;
	//	for (size_t j = 0; j < num - i; j++)
	//	{
	//		if (arr[j]>arr[j + 1])
	//		{
	//			int change = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = change;
	//			isOrnot = false;
	//		}
	//	}
	//	if (isOrnot)
	//	{
	//		break;
	//	}
	//}

	////Choose_Sort
	//for (size_t i = 0; i < num - 1; i++)
	//{
	//	int min = i;
	//	for (size_t j = i + 1; j < num; j++)
	//	{
	//		if (arr[min]>arr[j])
	//		{
	//			min = j;
	//		}
	//	}
	//	if (min != i)
	//	{
	//		int change = arr[min];
	//		arr[min] = arr[i];
	//		arr[i] = change;
	//	}
	//}

	////Insert_Sort
	//for (size_t i = 1; i < num; i++)
	//{
	//	int pre = i - 1;
	//	int curr = arr[i];
	//	while (pre >= 0 && arr[pre]>curr)
	//	{
	//		arr[pre + 1] = arr[pre];
	//		pre--;
	//	}
	//	arr[pre + 1] = curr;
	//}

	////Shell_Sort
	//int gap = num / 2;
	//while (gap > 0)
	//{
	//	for (size_t i = gap; i < num; i += gap)
	//	{
	//		int pre = i - gap;
	//		int curr = arr[i];
	//		while (pre >= 0 && arr[pre]>curr)
	//		{
	//			arr[pre + gap] = arr[pre];
	//			pre -= gap;
	//		}
	//		arr[pre + gap] = curr;
	//	}
	//	gap = gap / 2;
	//}

	////Heap_Sort
	//for (int i = num / 2 - 1; i >= 0; i--)
	//{
	//	adjust_sort(arr, i, num);
	//}
	//for (int j = num - 1; j >= 0; j--)
	//{
	//	int change2 = arr[0];
	//	arr[0] = arr[j];
	//	arr[j] = change2;

	//	adjust_sort(arr, 0, j);
	//}

	////Merge_Sort
	//int *temp = new int[num];
	//mergeSort(arr, 0, num - 1, temp);
	//delete[] temp;

	//Quick_Sort
	quickSort(arr, 0, num - 1);

	//output
	for (auto k : arr)
	{
		cout << k << endl;
	}
	system("pause");
	return 0;
}