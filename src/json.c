#include <stdio.h>
#include <stdlib.h>
#include "json.h"
#include <cjson/cJSON.h>

void crear_json(const char *filename) {
    cJSON *root = cJSON_CreateObject();
    if (!root) {
        fprintf(stderr, "No se pudo crear el objeto JSON.\n");
        return;
    }

    cJSON_AddStringToObject(root, "nombre", "Breyson Barrios Salazar");
    cJSON_AddNumberToObject(root, "edad", 23);
    cJSON_AddStringToObject(root, "carnet", "C31049");
    cJSON_AddBoolToObject(root, "estudiante activo", 1);

    char *json_string = cJSON_Print(root);
    FILE *file = fopen(filename, "w");
    if (file) {
        fputs(json_string, file);
        fclose(file);
        printf("Archivo JSON generado en '%s'.\n", filename);
    } else {
        perror("fopen");
    }

    free(json_string);
    cJSON_Delete(root);
}
