#include <stdio.h>
#include <math.h>
int main(){
    
    float accuracy, confidence, modelScore;
    int datasetSize;
    int role, status, permission;
    int deploymentReady;

    printf("Enter Model Accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter Model Confidence: ");
    scanf("%f", &confidence);

    printf("Enter Dataset Size: ");
    scanf("%d", &datasetSize);

    printf("\nUser Roles:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Enter User Role: ");
    scanf("%d", &role);

    printf("\nModel Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Enter Model Status: ");
    scanf("%d", &status);

    printf("\nEnter Permission Value:\n");
    printf("View = 1\n");
    printf("Train = 2\n");
    printf("Test = 4\n");
    printf("Deploy = 8\n");
    printf("Enter Permission: ");
    scanf("%d", &permission);

    modelScore = (accuracy + confidence) / 2;

    if (accuracy >= 80) {

        if (confidence >= 75) {

            if (datasetSize >= 1000) {

                if (status == 1) {

                    if (permission & 8) {
                        deploymentReady = 1;
                    }
                    else {
                        deploymentReady = 0;
                    }

                }
                else {
                    deploymentReady = 0;
                }

            }
            else {
                deploymentReady = 0;
            }

        }
        else {
            deploymentReady = 0;
        }

    }
    else {
        deploymentReady = 0;
    }

    printf("MODEL INFORMATION\n");

    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetSize);

    printf("Model Score: %.2f\n", modelScore);
    printf("Rounded Score: %.0f\n", round(modelScore));

    printf("\nUser Role: ");

    switch (role) {

        case 1:
            printf("Admin\n");

            switch (status) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid Model Status\n");
            }
            break;


        case 2:
            printf("Developer\n");

            switch (status) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid Model Status\n");
            }
            break;


        case 3:
            printf("Researcher\n");

            switch (status) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid Model Status\n");
            }
            break;


        default:
            printf("Invalid User Role\n");
    }

    printf("\nPermissions:\n");

    if (permission & 1)
        printf("View: Allowed\n");
    else
        printf("View: Not Allowed\n");

    if (permission & 2)
        printf("Train: Allowed\n");
    else
        printf("Train: Not Allowed\n");

    if (permission & 4)
        printf("Test: Allowed\n");
    else
        printf("Test: Not Allowed\n");

    if (permission & 8)
        printf("Deploy: Allowed\n");
    else
        printf("Deploy: Not Allowed\n");


    printf("\nDeployment Ready: %s\n",
           deploymentReady ? "YES" : "NO");


    printf("Size of Permission Variable: %zu bytes\n", sizeof(permission));
}