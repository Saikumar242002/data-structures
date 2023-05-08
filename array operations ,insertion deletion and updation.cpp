#include <stdio.h>

#define MAX_SIZE 100

int main()
 {
    int arr[MAX_SIZE], size, choice, i, pos, val;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
	 {
        scanf("%d", &arr[i]);
    }

    printf("\nArray: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }

    printf("\n\nArray Operations:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("3. Update an element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the position and value to insert: ");
            scanf("%d %d", &pos, &val);
            if (pos < 1 || pos > size+1)
			 {
                printf("Invalid position\n");
            } else {
                for (i = size-1; i >= pos-1; i--) 
				{
                    arr[i+1] = arr[i];
                }
                arr[pos-1] = val;
                size++;
            }
            break;

        case 2:
            printf("Enter the position to delete: ");
            scanf("%d", &pos);
            if (pos < 1 || pos > size)
			 {
                printf("Invalid position\n");
            } else {
                for (i = pos-1; i < size-1; i++)
				 {
                    arr[i] = arr[i+1];
                }
                size--;
            }
            break;

        case 3:
            printf("Enter the position and new value to update: ");
            scanf("%d %d", &pos, &val);
            if (pos < 1 || pos > size) {
                printf("Invalid position\n");
            } else {
                arr[pos-1] = val;
            }
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    printf("\nArray: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

