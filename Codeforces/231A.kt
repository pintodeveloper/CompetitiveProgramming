fun main(){

    val n = readLine()!!.toInt()
    var write = 0

    repeat(n){
        val (p,v,t) = readLine()!!.split(" ").map { it.toInt()}
        
        var count = 0
        if(p==1) count++
        if(v==1) count++
        if(t==1) count++

        if(count > 1) write++
    }
    print(write)
}



