class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        i1 = l1 = 0 # element index and list index of word1
        i2 = l2 = 0 # element index and list index of word1
        while l1 < len(word1) or l2 < len(word2):
            if l1 == len(word1) or l2 == len(word2): # If word1 is end or word2 is end
                return False
            if word1[l1][i1] != word2[l2][i2]: # If diff char between word1 and word2
                return False
            i1 += 1
            i2 += 1
            if i1 == len(word1[l1]):
                i1 = 0
                l1 += 1
            if i2 == len(word2[l2]):
                i2 = 0
                l2 += 1
        return True
