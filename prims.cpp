def prim(G,start):
	pq=PriorityQueue()
	for v in G:
		v.setDistance(sys.maxsize)
		v.stpred(None)
	srart.setDistance(0)
	pq.buildHeap([(v.getDistance(),v) for v in G])	
	while not pq.isEmpty():
		currentvert=pq.delmin()
		for nextvert in currentvert.geConnections():
			newcost=currentvert.grtWeight(nextvert)
			if nextvert in pq and newCost<nextvert.getDistance():
				nextvert.setpred(currentvert)
				nextvert.setDistance(newCost)
				pq.decreasekey(nextvert,newcost)
				
