#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    int nationalID;
    char name[50];
    int age;
    char illness[50];
};

void addPatient(FILE *file);
void searchPatient(FILE *file);
void deletePatient(FILE *file);
void modifyPatient(FILE *file);
void listPatients(FILE *file);

int main() {
    FILE *file;
    int choice;

    while (1) {
        file = fopen("patients.txt", "a+");
        if (file == NULL) {
            printf("Error opening patient file.\n");
            return 1;
        }
        printf("Menu : \n");
        printf("1. Add a patient\n");
        printf("2. Search for a patient\n");
        printf("3. Delete a patient\n");
        printf("4. Modify a patient\n");
        printf("5. List patients\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                addPatient(file);
                fclose(file);
                break;
            case 2:
                searchPatient(file);
                fclose(file);
                break;
            case 3:
                deletePatient(file);
                fclose(file);
                break;
            case 4:
                modifyPatient(file);
                fclose(file);
                break;
            case 5:
                listPatients(file);
                fclose(file);
                break;
            case 6:
                fclose(file);
                return 0;
            default:
                printf("Invalid choice.\n");
        }
        printf("\n");
    }
}


void addPatient(FILE *file) {
    struct Patient patient;
    

    printf("Enter patient's national ID   : ");
    scanf("%d", &patient.nationalID);

    printf("Enter patient's name          : ");
    scanf("%s", patient.name);

    printf("Enter patient's age           : ");
    scanf("%d", &patient.age);

    printf("Enter patient's illness infos : ");
    scanf("%s", patient.illness);

    // Write patient information to the file
    fprintf(file, "%d %s %d %s\n", patient.nationalID, patient.name, patient.age, patient.illness);

    printf("Patient added successfully.\n");
}

void searchPatient(FILE *file) {
    int nationalID;
    struct Patient patient;
    int found = 0;

    printf("Enter national ID to search : ");
    scanf("%d", &nationalID);

    // Search for the patient in the file
    while (fscanf(file, "%d %s %d %s\n", &patient.nationalID, patient.name, &patient.age, patient.illness) != EOF) {
        if (nationalID == patient.nationalID) {
            printf("Name    : %s\n", patient.name);
            printf("Age     : %d\n", patient.age);
            printf("Illness : %s\n", patient.illness);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Patient not found.\n");
    }
    printf("\n");
}

void deletePatient(FILE *file) {
    int nationalID;
    struct Patient patient;
    FILE *tempFile;
    int found = 0;

    printf("Enter national ID of the patient to delete : ");
    scanf("%d", &nationalID);

    // Open a temporary file to write non-deleted patients
    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error opening temporary file.\n");
        return;
    }

    // Traverse the file and copy non-deleted patients to the temporary file
    while (fscanf(file, "%d %s %d %s\n", &patient.nationalID, patient.name, &patient.age, patient.illness) != EOF) {
        if (nationalID != patient.nationalID) {
            fprintf(tempFile, "%d %s %d %s\n", patient.nationalID, patient.name, patient.age, patient.illness);
        } else {
            found = 1;
        }
    }

    // Close the files
    fclose(file);
    fclose(tempFile);

    if (!found) {
        printf("Patient not found.\n");
        remove("temp.txt");
        return;
    }

    // Delete the old file
    if (remove("patients.txt") != 0) {
        printf("Error deleting patient file.\n");
        return;
    }

    // Rename the temporary file with the name of the old file
    if (rename("temp.txt", "patients.txt") != 0) {
        printf("Error renaming temporary file.\n");
        return;
    }

    printf("Patient deleted successfully.\n");
    printf("\n");
}

void modifyPatient(FILE *file) {
    int nationalID;
    struct Patient patient;
    int found = 0;

    printf("Enter national ID of the patient to modify: ");
    scanf("%d", &nationalID);

    // Open a temporary file to write modified patients
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error opening temporary file.\n");
        return;
    }

    // Traverse the file and copy modified patients to the temporary file
    while (fscanf(file, "%d %s %d %s\n", &patient.nationalID, patient.name, &patient.age, patient.illness) != EOF) {
        if (nationalID == patient.nationalID) {
            printf("Enter new name of the patient : ");
            scanf("%s", patient.name);

            printf("Enter new age of the patient  : ");
            scanf("%d", &patient.age);

            printf("Enter new illness information : ");
            scanf("%s", patient.illness);

            fprintf(tempFile, "%d %s %d %s\n", patient.nationalID, patient.name, patient.age, patient.illness);
            found = 1;
        } else {
            fprintf(tempFile, "%d %s %d %s\n", patient.nationalID, patient.name, patient.age, patient.illness);
        }
    }

    // Close the files
    fclose(file);
    fclose(tempFile);

    if (!found) {
        printf("Patient not found.\n");
        remove("temp.txt");
        return;
    }

    // Delete the old file
    if (remove("patients.txt") != 0) {
        printf("Error deleting patient file.\n");
        return;
    }

    // Rename the temporary file with the name of the old file
    if (rename("temp.txt", "patients.txt") != 0) {
        printf("Error renaming temporary file.\n");
        return;
    }

    printf("Patient modified successfully.\n");
}

void listPatients(FILE *file) {
    struct Patient patient;

    printf("+-----+-----------------------------------+-----+-----------------------------------+\n");
    printf("| ID  | Name                              | Age | Illness                           |\n");
    printf("+-----+-----------------------------------+-----+-----------------------------------+\n");
    // Retrieve and display all patients from the file
    while (fscanf(file, "%d %s %d %s\n", &patient.nationalID, patient.name, &patient.age, patient.illness) != EOF) {
        printf("| %-3d | %-33s | %-3d | %-33s |\n", patient.nationalID, patient.name, patient.age, patient.illness);
    }
    printf("+-----+-----------------------------------+-----+-----------------------------------+\n");
}


