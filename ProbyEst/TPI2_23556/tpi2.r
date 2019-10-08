arrojarMoneda=function(n)sample(1:2,n,rep=T)

generasample<-function(m){
	datos=table(arrojarMoneda(1000))
	datos=prop.table(datos)
	datos=as.data.frame(datos)
	print(datos)
	xrango=c(1,2)
	yrango=c(0.45, 0.55)
	plot(xrango,yrango,type="n",main=paste(toString(m)," tiradas de moneda"),xlab="Cara o Cruz",ylab="Frecuencia Relativa")
	lines(datos[,1],datos[,2],type="l")
	lines(datos[,1],datos[,2],type="p")
	abline(h=1/2,col="red")
	}
generasample(100)
generasample(500)
generasample(1000)
generasample(5000)
