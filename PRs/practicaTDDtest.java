package PRs;
import PracticaTDD;

public class practicaTDDtest{

	@BeforeEach
	private void setUp(){
		PracticaTDD pTdd = new PracticaTDD(5);
		int  numeroLapices = pTdd.getNumerosLapices();
	}

	@test
	public void testTodavitaHaylapices(){
		

		AssertEquals(5,numeroLapices);

	}

	@test
	public void testNoHayLapices(){
		

		AssertEquals(0, numeroLapices);
	}
}