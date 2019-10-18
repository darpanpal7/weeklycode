#function returns height of rectangle for a given word
def get_rect_height(word, height_arr):
    height = 0
    for c in word:
        height = max(height, height_arr[ ord(c) - ord("a") ])
        #ord(character) gives the ascii value
    return height

heights = [int(x) for x in raw_input().split()]	#scan heights
word = raw_input()

print len(w) * get_rect_height(w, heights)
