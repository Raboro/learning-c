#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

void list_files_valid_dir(DIR *dir, char *base_path);

void list_files(char *basePath)
{
    DIR *dir = opendir(basePath);

    if (!dir)
    {
        perror("Directory opening error");
        return;
    }

    list_files_valid_dir(dir, basePath);
}

void list_files_valid_dir(DIR *dir, char *base_path)
{
    struct dirent *dp;
    while ((dp = readdir(dir)) != NULL)
    {
        if (dp->d_type == DT_DIR)
        {
            if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
            {
                char path[1024];
                sprintf(path, "%s/%s", base_path, dp->d_name);
                printf("Directory: %s/\n", path);
                list_files(path);
            }
        }
        else if (dp->d_type == DT_REG)
        {
            char path[1024];
            sprintf(path, "%s/%s", base_path, dp->d_name);
            printf("File: %s\n", path);
        }
    }

    closedir(dir);
}

int main()
{
    list_files(".");
}