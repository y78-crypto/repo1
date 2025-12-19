#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // ランダム数列を出すためのシードsrand()を今のパソコンの時間time(0)にする
    srand(time(0));
    
    // rand()は0 - 32767の間に適当な数字を出す。％（余り）を使って最大値を指定
    
	// 合計値は20
    int rest_points = 20;
    
    // 記憶力（0~18）
    int intelligence = (rand() % 19);
    rest_points = 20 - intelligence;
    
    // 瞬発力 (最大値は、残りポイント)
    int stamina = (rand() % (rest_points + 1)); 
    
    // 魅力 (残りポイントを代入)
    int charisma = rest_points - stamina;
    
    int abilities[3] = {intelligence, stamina, charisma};
    
    // 最大値を探す
    int i;
    int largest = intelligence;
    for (i = 0; i < 3; i++){
        if (abilities[i] > largest){
            // 最大値更新
            largest = abilities[i];
        }
    }
    
    
    // 最大値と同じ値が２個ないかチェック（同率１位）
    int count = 0;
    
    if (intelligence == largest) count++;
    if (stamina == largest) count++;
    if (charisma == largest) count++;
    
    
    // 最大値に対応したクラスを格納
    char *player_class;
    char *second_class;
    
    if (largest == intelligence){
        /* "mage" などは文字列リテラル。プログラムが実行されるとき、"mage" 自体は
            すでにメモリに存在している。よってポインタに先頭アドレスを入れればOK
        */
        player_class = "mage";
        
        // 複数クラスの場合
        if (count == 2){
            second_class = (stamina > charisma) ? "kight" : "thief"; 
        }
        
    }
    else if (largest == stamina){
        player_class = "knight";
        
        if (count == 2){
            second_class = (intelligence > charisma) ? "mage" : "thief";
        }
    }
    else {
        player_class = "thief";
        
        if (count == 2){
            second_class = (intelligence > charisma) ? "mage" : "knight";
        }
    }
    
    // スタッツとクラスを表示
    printf("intelligence: %d\n", intelligence);
    printf("stamina: %d\n", stamina);
    printf("charisma: %d\n", charisma);
    printf("class is: %s\n", player_class);
    // 複数クラスの表示
    if (count == 2) printf("second class is: %s\n", second_class);
    

    return 0;
}