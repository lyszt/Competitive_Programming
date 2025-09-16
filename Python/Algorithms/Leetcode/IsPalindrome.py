from typing import *

class TrieNode:
    def __init__(self):
        self.children = [None] * 26
        self.isLeaf = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    # Method to insert a key into the Trie
    def insert(self, key):
        curr = self.root
        for c in key:
            index = ord(c) - ord('a')
            if curr.children[index] is None:
                curr.children[index] = TrieNode()
            curr = curr.children[index]
        curr.isLeaf = True

    # Method to search a key in the Trie
    def search(self, key):
        curr = self.root
        for c in key:
            index = ord(c) - ord('a')
            if curr.children[index] is None:
                return False
            curr = curr.children[index]
        return curr.isLeaf

    # Method to check if a prefix exists in the Trie
    def isPrefix(self, prefix):
        curr = self.root
        for c in prefix:
            index = ord(c) - ord('a')
            if curr.children[index] is None:
                return False
            curr = curr.children[index]
        return True

    def findLongestPrefix(self):
        curr = self.root
        prefix = ""
        while True:
            children = [child for child in curr.children if child is not None]
            # Stop if more than one branch or leaf
            if len(children) != 1 or curr.isLeaf:
                break
            # Only one child: append its character
            index = curr.children.index(children[0])
            prefix += chr(index + ord('a'))
            curr = children[0]
        return prefix


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0: return ""
        if len(strs) <= 1: return strs[0]
        trie = Trie()
        for word in strs:
            trie.insert(word)
        return trie.findLongestPrefix()





strs =  ["flower","flow","flight"]
print(Solution().longestCommonPrefix(strs))
