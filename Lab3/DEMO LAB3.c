#include <studio.h>

int main(){ 
    /*double diem;
    printf("nhap diem cua ban")
    scanf("%if", &diem);
    /*if(diem>=5){
        printf("dau!!!");
    }else 
        printf("rot$$$$");*/
    //tinh hoc luc sinh vien*/

    /*if(diem>9){
        printf("Xuat sac");     
    }else if (diem>=8 && diem<9)
    {
        printf("Gioi!");
    }else if (diem>=7 && diem<8)
    {
        printf("Kha");
    }else if (diem>=5 && diem<7)
    {
        printf("trung binh");
    }else 
    {
        printf("kem");
    }*/

    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a.52\nb.53\nc.54\nd.55\n");
    printf("Xin moi ban chon dap an (a,b,c,d): ");
    char dapan;
    scanf("$s",&dapan);
    switch(dapan){
        case 'a': printf("ban da chon sai\n");
        break;
        case 'b': printf("ban da chon sai\n");
        break;
        case 'c': printf("ban da chon dung\n");
        break;
        case 'd': printf("ban da chon sai\n");
        break;
        default:
            printf("bo dap an a,b,c,d"):
    return 0;
}
