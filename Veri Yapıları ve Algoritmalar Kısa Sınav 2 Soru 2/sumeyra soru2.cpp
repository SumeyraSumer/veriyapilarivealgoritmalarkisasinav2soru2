// Veri Yapýlarý ve Algoritmalar KS - 2 Soru 2
// Sümeyra Sümer
// 5210505067



#include <iostream>
#include <algorithm>

int binary_search(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
	
	std::cout << "Veri Yapilari ve Algoritmalar KS - 2 Soru 2" << std::endl;
	std::cout << "Sumeyra Sumer" << std::endl;
	std::cout << "5210505067" << std::endl;
	std::cout << "-----------------------------------------------------------------------" << std::endl;
	
	
	
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int x = 84; // Aranacak deðer

    std::sort(dizi, dizi + n); // Diziyi sýrala

    int result = binary_search(dizi, 0, n - 1, x);

    if (result == -1) {
        std::cout << "Eleman bulunamadi." << std::endl;
    } else {
        std::cout << "Eleman " << result << ". indexte bulunmaktadir." << std::endl;
    }

    return 0;
}

