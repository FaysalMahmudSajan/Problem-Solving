"""
Track product rankings on an ecommerce website.

3 functions (APIs):


ItemPurchased(), called every time an item is purchased on the website
GetRank(), returns the rank of the product
GetTopTenProducts(), returns a list of top ten products by rank


itemPurchased(“book”);
itemPurchased(“eraser”);
itemPurchased(“book”);
itemPurchased(“eraser”);
itemPurchased(“eraser”);
itemPurchased(“pencil”);



Count how many times each product is purchased

Book : 2
Eraser: 3 (highest)
Pencil: 1


getRank(“book”) -> 2 // due to 2 purchases
getRank(“eraser”) -> 1  // Due to 3 purchases
getRank(“pencil”) -> 3 //  1 purchase


itemPurchased(“stapler”);
itemPurchased(“stapler”);
itemPurchased(“stapler”);
itemPurchased(“stapler”);
itemPurchased(“stapler”);


getRank(“stapler”) -> 1
getRank(“eraser”) -> 2

"""

# /////  YOU CODE  /////


class TrackProductRanking:
    def __init__(self):
        self.count = {}

    def itemPurchased(self,product):
        self.count[product]=self.count.get(product,0)+1

    def getRank(self,product):
        self.sort_products=sorted(self.count.items(),key=lambda x : (-x[1],x[0]))
        product_rank={p:i+1 for i,(p,c) in enumerate(self.sort_products)}
        return f"{product} rank: {product_rank.get(product,None)}"
    
    def GetTopTenProducts(self):

        return [p for p,_ in self.sort_products[:10]]


track=TrackProductRanking()

track.itemPurchased('book')
track.itemPurchased('eraser')
track.itemPurchased('book')
track.itemPurchased('eraser')
track.itemPurchased('eraser')
track.itemPurchased('pencil')


# track.itemPurchased('a')
# track.itemPurchased('b')
# track.itemPurchased('c')
# track.itemPurchased('d')
# track.itemPurchased('e')
# track.itemPurchased('f')
# track.itemPurchased('g')
# track.itemPurchased('h')

for p,c in track.count.items():
    print(p,':',c)
 
print(track.getRank('book'))
print(track.getRank('eraser'))
print(track.getRank('pencil'))

track.itemPurchased('stapler')
track.itemPurchased('stapler')
track.itemPurchased('stapler')
track.itemPurchased('stapler')
track.itemPurchased('stapler')

for p,c in track.count.items():
    print(p,':',c)

print(track.getRank('stapler'))
print(track.getRank('eraser'))

print(track.GetTopTenProducts())