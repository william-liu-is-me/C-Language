/* calculate the height of the tree using similar triangle method */
#include <stdio.h>
int main()
{
    const float short_man = 158.5f;
    const float high_man = 188.6f;
    float distance_from_short_to_high;
    float distance_from_high_to_tree;
    float part_tree_hegiht;
    float total_tree_height;

    printf("the distance from short to high is:\n");
    scanf("%f", &distance_from_short_to_high);
    printf("the distance from high to tree is:\n");
    scanf("%f", &distance_from_high_to_tree);
    part_tree_hegiht = (distance_from_high_to_tree+distance_from_short_to_high)*high_man/distance_from_short_to_high;
    total_tree_height = part_tree_hegiht + short_man;
    printf("the height of the tree is %.4fcm\n", total_tree_height);
    return 0;
}
