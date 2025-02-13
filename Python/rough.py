import math

# Total ways to choose 4 cards from 52
total_ways = math.comb(52, 4)

# Favorable outcomes: choose 1 king, 2 queens, and 1 non-queen, non-king card
favorable_outcomes = math.comb(4, 1) * math.comb(4, 0) * math.comb(44, 3) + math.comb(4, 1) * math.comb(4, 1) * math.comb(44, 2) + math.comb(4, 1) * math.comb(4, 2) * math.comb(44, 1) + math.comb(4, 1) * math.comb(4, 3) * math.comb(44, 0)

# Probability calculation
probability = favorable_outcomes / total_ways
probability

print(favorable_outcomes)
print()
print(probability)