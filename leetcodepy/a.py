class Solution:
    def minMaxDifference(self, num: int) -> int:
        s = str(num)
        reMin = s[0]
        reMax = '9'
        for i in range(len(s)):
            if s[i]!="9":
                reMax = s[i]
                break
         
                
        max = int(s.replace(reMax,"9"))
        min = int(s.replace(reMin,"0"))
        return max-min

            
            
        