int Save_score(int score){
	FILE *fptr;
	printf("Ten cua ban la : ");
	char score_check[30];
    gets(score_check);
	printf("Truy cap rapid_score.txt de xem thanh tich");
	fptr = fopen("rapid_score.txt","a");
	fprintf(fptr,"%s : ",score_check);
	fprintf(fptr,"%d point\n",score);
  	fclose(fptr);
}
