#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char password[21];
    bool length=false, up=false, low=false, have_num=false;
	char number[10] = "0123456789";
	int i, j;
	
	// パスワードの上限は20文字に設定
    printf("Input password(maximum 20 characters): ");
    scanf("%20s", password);   // バッファオーバーフロー防止
    int len = strlen(password);     // パスワードの長さ記録
    
    if (len >= 8){
        length = true;
    }
	for (i= 0; i <= len; i++){
		if ('a' <= password[i] && password[i] <= 'z' && low == false){
			low = true;
		}
		if ('A' <= password[i] && password[i] <= 'Z' && up == false){
			up = true;
		}
		for (j=0; j<=9; j++){
			if (password[i] == number[j]){
				have_num = true;
				break;
			}
		}
	}
	if (length && up && low && have_num){
		printf("Your password is strong\n");
	}
	if (length == false){
		printf("Your password is short(7 or less)\n");
	}
	if (up == false || low == false){
		printf("Please include both uppercase and lowercase letters\n");
	}
	if (have_num == false){
		printf("Please include number\n");
	}
    

    return 0;
}

