/*Printing system information like number of processors and ...*/

#include<Windows.h>
#include<stdio.h>

int main() {
	SYSTEM_INFO si;
	::GetNativeSystemInfo(&si);


	printf("Number of processors is: %d\n", si.dwNumberOfProcessors);
	printf("Page size is: %d\n", si.dwPageSize);
	printf("Processor mask is: 0x%p\n", (PVOID)si.dwActiveProcessorMask);
	printf("Minimum processor address is: 0x%p\n", si.lpMinimumApplicationAddress);
	printf("Maximum processor address is: 0x%p\n", si.lpMaximumApplicationAddress);

	return 0;
}