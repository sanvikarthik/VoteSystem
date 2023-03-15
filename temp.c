#include <stdio.h>
#include <string.h>

void vote()
{
    int i, option, vote_counts[5] = {0};
    
    register_voters();
    
    char username[20], password[20];
    int finished = 0,op;
    
    printf("Please enter your username: ");
    scanf("%s", username);
    printf("Please enter your password: ");
    scanf("%s", password);
    if (strcmp(username, "u") == 0 && strcmp(password, "p") == 0)
    {
        printf("\nWelcome, %s!\n", username);
        finished = 1;
    }

    while (finished)
    {

        // Verify login credentials
        printf("Please enter your ID number: ");
        char id[MAX_ID_LEN];
        scanf("%s", id);

        // Check voter eligibility
        if (check_eligibility(id) == 1)
        {
            printf("\nYou are eligible to vote. Please select your candidate:\n");
            printf("1. Candidate A\n2. Candidate B\n3. Candidate C\n4. Candidate D\n5. Candidate E\n");
            scanf("%d", &option);

            // Record vote
            record_vote(option, vote_counts);

            // Update voter record
            update_voter_record(id);

            printf("Thank you for voting!\n");
        }
        else
        {
            printf("\nYou are not eligible to vote.\n");
            exit(1);
        }
    }

    // Write results to file
    write_results_to_file(vote_counts);
}