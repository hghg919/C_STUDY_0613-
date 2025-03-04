/*
* 작성자 : 정현준
* 작성일 : 2024-07-02
* 학습목표 : 배열
* - 별피하기 게임에 별을 여러개 한번에 생성하고 싶다.
*/

/*
* 배열의 선언
* 
* - 변수의 선언 (데이터형) (변수이름)  - 값;
* - 배열의 선언 (데이터형) (배열이름)[];
* 
*  - 배열을 선언하는 첫번째 방법
* 데이터형 배열이름 [배열의 수]
* 
*   - 배열을 선언하는 두번째 방법
*/

#include "lectures.h"
#include <stdbool.h>

void lectures16()
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10; //100 1000 10000

	// 배열1
	int arr[10] = {0};

	//배열2
	int arr2[] = { 0,1,2,3,4,5 }; // arr2 6개 ... arr2[7], arr2[8]

	//배열3
	int arr3[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 10; i++)
	{
		//printf("배열에 들어간 요소 출력 : %d \n", arr[i]);
		//printf("배열에 들어간 요소 출력 : %d \n", arr2[i]);
		//printf("배열에 들어간 요소 출력 : %d \n", arr3[i]);	
	}

	// ex. ey 10개 사용할 수 있게 만들어 볼겁니다.
	// 배열로 만들어 보세요.

	int ex[10] = { 0 };
	int ey[10] = { 0 };
	bool enemy[10] = { false };

	for (int i = 0; i < 10; i++)
	{
		printf("ex값 출력 : %d, : ey값 출력 : %d, enemy : %d \n", ex[i], ey[i], enemy[i]);
	}
}