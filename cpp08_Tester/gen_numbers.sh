# #!/bin/bash

num_elements=10000
output_file="test_numbers.txt"
range_start=10000
range_end=50000000

for ((i = 0; i < num_elements; i++)); do
    echo $((RANDOM % (range_end - range_start + 1) + range_start))
done > "$output_file"