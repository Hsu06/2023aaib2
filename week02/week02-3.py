#�G�i�쪺�r��,�̭����@��0�M1
#�Q�γo��0�M1��X�̤j���_��
#�Ѫk:���p��(���X��1),��@��1��̥k��,��L������,������0
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N=len(s)
        one=0
        for c in s:
            if c=='1':
                one+=1
        return '1'*(one-1)+'0'*(N-one)+'1'
