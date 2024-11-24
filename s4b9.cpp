#include <stdio.h>

int main() {
    int ngay, thang, nam;

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    int hop_le = 1;

    if (nam < 1) {
        hop_le = 0;
    }
    if (thang < 1 || thang > 12) {
        hop_le = 0;
    }
    if (ngay < 1) {
        hop_le = 0;
    }

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (ngay > 31) hop_le = 0;
            break;
        case 4: case 6: case 9: case 11:
            if (ngay > 30) hop_le = 0;
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                if (ngay > 29) hop_le = 0;
            } else {
                if (ngay > 28) hop_le = 0;
            }
            break;
        default:
            hop_le = 0;
    }

    if (hop_le) {
        printf("Ngay thang nam hop le\n");
    } else {
        printf("Ngay thang nam khong hop le\n");
    }

    return 0;
}

